var ExtractTextPlugin = require("extract-text-webpack-plugin")
var CleanWebpackPlugin = require('clean-webpack-plugin');
const glob = require('glob')
var path = require("path")

const extractBundleSass = new ExtractTextPlugin("css/pwpaint.css")

module.exports = function(env) {
    var me = [
        {
            entry: path.join(__dirname, "src", "app.js"),
            output: {
                path: path.join(__dirname, "dist"),
                filename: "js/pwpaint-bundle.js",
                libraryTarget: "var",
                library: "pw"
            },
            context : path.resolve("./src"),
            module: {
                loaders: [
                    //html pages
                    { test: /.*\.html$/, loader: "file-loader?name=[path]/[name].[ext]" },

                    //cpp
                    { test: /pwpaint\.html$/, loader: "ignore-loader" },
                    { test: /pwpaint\.js$/, loader: "file-loader?name=js/[name].[ext]" },
                    
                    //jquery
                    { test: /jquery\.min\.js$/, loader: "file-loader?name=js/[name].[ext]" },
                    { test: /jquery\.color\.js$/, loader: "file-loader?name=js/[name].[ext]" },
                    

                    //font-awesome, we might change to something like iconmoon - and pick a few webfonts
                    { test:/font-awesome\.min\.css$/, loader: "file-loader?name=css/[name].[ext]" },
                    {
                        test:[
                            /FontAwesome\.otf$/,
                            /fontawesome-webfont\.eot$/,
                            /fontawesome-webfont\.svg$/,
                            /fontawesome-webfont\.ttf$/,
                            /fontawesome-webfont\.woff$/,
                            /fontawesome-webfont\.woff2$/
                        ],
                        loader: "file-loader?name=fonts/[name].[ext]"
                    },

                    //sass
                    {
                        test: /.*\.scss$/,
                        loader: extractBundleSass.extract({
                            fallback: "style-loader",
                            use: [
                                {
                                    loader: "css-loader"
                                },
                                { loader: 'sass-loader'
                                }
                            ]
                        })
                    },
                    //images
                    {
                        test: /\.(png|jpg|jpeg|gif|svg)$/,
                        loader: "file-loader?name=[path]/[name].[ext]",
                        exclude: [
                            /fontawesome-webfont.svg$/,
                        ]
                    },
                ]
            },
            plugins: [
                extractBundleSass,
                new CleanWebpackPlugin(["dist"], { root: __dirname, verbose: true, dry: false, exclude: [] })
            ]
        }
    ]
    return me
}

