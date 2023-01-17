import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var arr : Array<Boolean> = Array(30) { false }

    for(i in 0 until 28) {
        arr[nextInt() - 1] = true
    }

    for(i in 0 until 30) {
        if(!arr[i]) {
            println(i + 1)
        }
    }
}