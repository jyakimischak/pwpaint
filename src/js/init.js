
export function initCanvas() {
    pw.c.setDisplaySize($(".paintArea").width(), $(".paintArea").height())
    pw.c.setPaBackgroundColor(pw.const.paintAreaBackgroundColor.r, pw.const.paintAreaBackgroundColor.g, pw.const.paintAreaBackgroundColor.b)
}

