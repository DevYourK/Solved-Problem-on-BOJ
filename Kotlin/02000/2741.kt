import java.util.Scanner

fun main() = with(Scanner(System.`in`))  {
    var N = nextInt()

    for(i in 0 until N) {
        println(i + 1)
    }
}
