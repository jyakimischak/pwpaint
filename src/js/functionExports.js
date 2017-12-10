
//PaintMain
export var setDisplaySize
export var sayHello
export var drawDebug
//PaintAreaState
export var setPaBackgroundColor

export function setupExports() {
    //PaintMain
    setDisplaySize = Module.cwrap("setDisplaySize", "[number, number]")
    sayHello = Module.cwrap("sayHello")
    drawDebug = Module.cwrap("drawDebug")
    //PaintAreaState
    setDisplaySize = Module.cwrap("setDisplaySize", "[number, number]")
    setPaBackgroundColor = Module.cwrap("setPaBackgroundColor", "[number, number, number]")
}

