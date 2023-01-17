import java.util.Scanner

fun main() = with(Scanner(System.`in`))  {
    var str = nextLine().trim()
    var arr = str.split(' ')
    
    if(str.isEmpty()) {
        println(0)
    } else {
        println(arr.size)
    }
}
