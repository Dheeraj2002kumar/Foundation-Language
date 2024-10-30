package Day4;

class Lamp {
  private boolean isOn;

  public Lamp() {
    this.isOn = false;
  }

  public void turnOn(){
    isOn = true;
    System.out.println("Light is on");
  }

  public void turnOff(){
    isOn = false;
    System.out.println("Light is off");
  }

  public boolean isLightOn(){
    return isOn;
  }
}

public class Main1 {
  public static void main(String[] args) {
    Lamp led = new Lamp();
    Lamp halogen = new Lamp();

    led.turnOn();
    System.out.println("Is led light on? " + led.isLightOn());

    halogen.turnOff();
    System.out.println("Is halogen light on? " + halogen.isLightOn());

    //====== output =============
//     PS C:\Users\hp\Desktop\TCS IT\Java> java Day4.Main1
// Light is on
// Is led light on? true
// Light is off
// Is halogen light on? false
// PS C:\Users\hp\Desktop\TCS IT\Java> 
  }
}