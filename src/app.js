
module.exports = {
    c : require("./js/functionExports.js"),
    init : require("./js/init.js"),
    const : require("./js/constants.js"),
    pa : require("./js/paintArea.js")
}
require.context(".", true, /^.*\.html$/)
require.context(".", true, /^.*\.scss$/)

//cpp
require("./cpp/pwpaint.js")

//Images
// require.context("./images", true, /\.(png|jpg|jpeg|gif|svg)$/)

//jquery
require("../node_modules/jquery/dist/jquery.min.js")
require("../node_modules/jquery-color/jquery.color.js")
