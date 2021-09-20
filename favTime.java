import java.util.Scanner;

public class favTime
{
    public static void main(String [] args)
    {
        Scanner input = new Scanner(System.in);
        int [] clock = new int[]{1, 2, 0, 0};
        int difference = 0;
        int count = 0;
        int minutes = input.nextInt();
        for(int i = 0; i <= minutes; i++)
        {
            difference = clock[3] - clock[2];
            if(clock[2] - clock[1] == difference)
            {
                if((clock[1] - clock[0] == difference) && clock[0] != 0)
                {
                    count++;
                }
                else if(clock[0] == 0)
                {
                    count++;
                }
            }
            clock[3]++;
            if(clock[0] == 1 && clock[1] == 2)
            {
                if(clock[2] == 5 && clock[3] == 9)
                {
                    clock[0] = 0;
                    clock[1] = 1;
                    clock[2] = 0;
                    clock[3] = 0;
                    i++;
                }
            }

            if(clock[1] == 10)
            {
                clock[1] = 0;
                clock[0] = 1;
            }
            if(clock[2] == 6)
            {
                clock[2] = 0;
                clock[1]++;
            }
            if(clock[3] == 10)
            {
                clock[3] = 0;
                clock[2]++;
            }
        }
        System.out.println(count);
    }
}