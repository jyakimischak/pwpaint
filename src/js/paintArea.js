
$(window).resize(function() {
    console.log("resized")
    pw.c.setWindowSize($(".paintArea").width(), $(".paintArea").height())
})
