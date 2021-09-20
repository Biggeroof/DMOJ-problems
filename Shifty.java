import java.util.Scanner;

public class Shifty
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int number;
        int shift;
        int sum = 0;
        number = input.nextInt();
        shift = input.nextInt();
        for(int i = 0; i <= shift; i++)
        {
            sum += number;
            number *= 10;
        }
        System.out.println(sum);
    }
}