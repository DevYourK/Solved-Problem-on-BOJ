import java.util.*

fun main() = with(Scanner(System.`in`)) {
    var arr = mutableListOf<Int>()
    var maxNum = 0;
    var maxIndex = 0;

    for(i in 0 until 9) {
        arr.add(nextInt())
    }

    for((i, j) in arr.withIndex()) {
        if(j > maxNum) {
            maxIndex = i
            maxNum = j
        }
    }

    print("${maxNum}\n${maxIndex+1}")
}