
// JavaScript Exports
// module.exports = {
//     m : require("./Main.js")
// }
//html pages; index.html is special and handled in the webpack file
require.context(".", true, /^.*\.html$/)
//Images
// require.context("./images", true, /\.(png|jpg|jpeg|gif|svg)$/)

//jquery
require("../node_modules/jquery/dist/jquery.min.js")
require("../node_modules/jquery-color/jquery.color.js")

//Sass
// require("./styles/styles.scss")
