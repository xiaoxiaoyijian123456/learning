// run it with: (add . to CLASSPATH)
//   javac -cp ./commons-cli-1.4.jar JavaLearning.java
//   java -cp ./commons-cli-1.4.jar;./ JavaLearning
//   java -cp ./commons-cli-1.4.jar;./ JavaLearning --port=9091
//   java -cp ./commons-cli-1.4.jar;./ JavaLearning -p=9091
import org.apache.commons.cli.CommandLineParser;   
import org.apache.commons.cli.Options;  
import org.apache.commons.cli.Option;  
import org.apache.commons.cli.DefaultParser;  
import org.apache.commons.cli.CommandLine;  
import org.apache.commons.cli.ParseException; 

public class JavaLearning {
    public static void main(String[] args) throws Exception {
        final Options options = new Options();
        final Option option = new Option("p", "port", true, "set port");
        options.addOption(option);
        
        final CommandLineParser parser = new DefaultParser();
        CommandLine cmd = null;
        try {
            cmd = parser.parse(options, args);
        } catch (final ParseException e) {
            throw new Exception("parser command line error",e);
        }
        
        String port = "9090";
        if (cmd.hasOption("p")) {
            port = cmd.getOptionValue("p");
        } else if (cmd.hasOption("port")) {
            port = cmd.getOptionValue("port");
        }
        
        System.out.printf("port=%s\n", port);
    }
}
