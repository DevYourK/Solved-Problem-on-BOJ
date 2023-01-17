2import java.io.BufferedWriter
import java.io.OutputStreamWriter

fun main() {
    var N = readln().toInt()
    var list = mutableListOf<Int>()

    for(i in 0 until N) {
        list.add(readln().toInt())
    }

    list.sort()

    val bw = BufferedWriter(OutputStreamWriter(System.out))
    for(i in list) {
        bw.write("${i}\n")
    }
    bw.flush()
    bw.close()
}