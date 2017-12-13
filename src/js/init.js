
export function initCanvas() {
    //order here is important
    pw.c.setStandardWidth(pw.const.standardWidth)
    pw.c.setDefaultCanvasSize(pw.const.defaultCanvasSize.w, pw.const.defaultCanvasSize.h)
    pw.c.setInitialMargin(pw.const.initialMargin)
    pw.c.setWindowSize($(".paintArea").width(), $(".paintArea").height())
    pw.c.setPaBackgroundColor(pw.const.paintAreaBackgroundColor.r, pw.const.paintAreaBackgroundColor.g, pw.const.paintAreaBackgroundColor.b)
    pw.c.init()
}

