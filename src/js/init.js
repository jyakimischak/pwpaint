
export function initCanvas() {
    pw.c.setStandardWidth(pw.const.standardWidth)
    pw.c.setWindowSize($(".paintArea").width(), $(".paintArea").height())
    pw.c.setPaBackgroundColor(pw.const.paintAreaBackgroundColor.r, pw.const.paintAreaBackgroundColor.g, pw.const.paintAreaBackgroundColor.b)
}

