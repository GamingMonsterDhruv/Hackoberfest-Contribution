package Kotlin_practice.Kotlin_basic.Kotlin_OOps.Inheritance

// open class Animal (open var name : String, open var age : Int ) {
//
//
//     open var legs : Int = 4
//    fun walk(): Unit {
//        println("$name is walking")
//    }
//
//   open  fun scream (): Unit {
//         println("$name is screaming")
//     }
// }
//
// class dog(override var name: String, override  var age : Int) : Animal(name,age) {
//
//   override var legs : Int = 4
//
//     fun eat(): Unit {
//         println("$name is eating")
//     }
//
//     override fun scream() {
//         super.scream()
//     }
//
//
// }
//
// fun main (){
//
//     val obj = dog("Olive",4)
//
//     println("${obj.name} , ${obj.age}, ${obj.legs}")
//     obj.eat()
//     obj.scream()
//     obj.walk()
// }