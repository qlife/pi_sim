import java.util.Random;

public class PiSim {
    private final static int randomPoints = 1000000;
    private final static int simPass = 10;

    public static double doSim() {
        int sum = 0;
        double x, y;
        Random random = new Random();

        for(int j = 0; j < randomPoints; ++j) {
            x = random.nextDouble();
            y = random.nextDouble();

            if(1.0 > (x * x + y * y)) {
                sum ++;
            }
        }
        return 4.0 * (sum / randomPoints);
    }

    public static void main(String [] args) {
        long milliStart = System.currentTimeMillis();
        for(int j = 0; j < simPass; ++j) {
            doSim();
        }
        long milliEnd = System.currentTimeMillis();
        System.out.print("Time Consume: ");
        System.out.println(milliEnd - milliStart);
    }
}