
export var setPaBackgroundColor
export var setStandardWidth
export var setWindowSize
export var sayHello
export var drawDebug

export function setupExports() {
    setPaBackgroundColor = Module.cwrap("setPaBackgroundColor", "[number, number, number]")
    setStandardWidth = Module.cwrap("setStandardWidth", "number")
    setWindowSize = Module.cwrap("setWindowSize", "[number, number]")
    sayHello = Module.cwrap("sayHello")
    drawDebug = Module.cwrap("drawDebug")
}

