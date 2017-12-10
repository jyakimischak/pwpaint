
export var sayHello
export var setDisplaySize

export function setupExports() {
    sayHello = Module.cwrap("sayHello")
    setDisplaySize = Module.cwrap("setDisplaySize", "[number, number]")
}

