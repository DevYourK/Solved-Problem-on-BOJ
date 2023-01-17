import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var N = nextInt()

    for(i in 0 until N) {
        println(N - i)
    }
}