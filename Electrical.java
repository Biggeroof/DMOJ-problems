import java.util.Scanner;

public class Electrical
{
    public static void main(String [] args)
    {
        Scanner input = new Scanner(System.in);
        int startX = input.nextInt();
        int startY = input.nextInt();
        int finalX = input.nextInt();
        int finalY = input.nextInt();
        int charge = input.nextInt();

        int vertical = Math.abs(finalY - startY);
        int horizontal = Math.abs(finalX - startX);

        int distance  = vertical + horizontal;

        if(distance <= charge && (charge - distance) % 2 == 0)
        {
            System.out.println("Y");
        }
        else
        {
            System.out.println("N");
        }
    }
}