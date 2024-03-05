package localRepo.java.fundamentals;

class Switch{
    public static void main(String[] args){
        String day = "Monday";
        // way 1

        // switch(day){
        //     case "Saturday" : System.out.println("6:00 am");
        //     break;
        //     case "Sunday" : System.out.println("6:00 am");
        //     break;
        //     case "Monday" : System.out.println("8:00 am");
        //     break;
        //     default : System.out.println("7:00 am");
        // }

        // way2 

        // switch(day){
        //         case "Saturday","Sunday" : System.out.println("6:00 am");
        //         break;
        //         case "Monday" : System.out.println("8:00 am");
        //         break;
        //         default : System.out.println("7:00 am");
        //     }

        // way 3

        // switch(day){
        //         case "Saturday" -> System.out.println("6:00 am");
        //         case "Sunday" -> System.out.println("6:00 am");
        //         case "Monday" -> System.out.println("8:00 am");
        //         default -> System.out.println("7:00 am");
        //     }


        String result = "";
        // way 4 as an expression

        // result = switch(day){
        //     case "Saturday","Sunday" -> "6:00 am";
        //     case "Monday" -> "8:00 am";
        //     default -> "7:00 am";
        // };

        // same thing but using colon

        result =  switch(day){
            case "Saturday","Sunday" : yield "6:00 am";
            case "Monday" : yield "8:00 am";
            default : yield "7:00 am";
        };

        System.out.println(result);
    }
}