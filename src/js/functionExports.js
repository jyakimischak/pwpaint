
export var init
export var setPaBackgroundColor
export var setStandardWidth
export var setWindowSize
export var setDefaultCanvasSize
export var setInitialMargin
export var setCanvasSize
export var setDefaultBaseLayerColor
export var sayHello
export var drawDebug

export function setupExports() {
    init = Module.cwrap("init", "")
    setPaBackgroundColor = Module.cwrap("setPaBackgroundColor", "[number, number, number]")
    setStandardWidth = Module.cwrap("setStandardWidth", "number")
    setWindowSize = Module.cwrap("setWindowSize", "[number, number]")
    setDefaultCanvasSize = Module.cwrap("setDefaultCanvasSize", "[number, number]")
    setInitialMargin = Module.cwrap("setInitialMargin", "number")
    setCanvasSize = Module.cwrap("setCanvasSize", "[number, number]")
    setDefaultBaseLayerColor = Module.cwrap("setDefaultBaseLayerColor", "[number, number, number]")
    sayHello = Module.cwrap("sayHello")
    drawDebug = Module.cwrap("drawDebug")
}

