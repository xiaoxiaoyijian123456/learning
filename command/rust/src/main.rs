// run it with
//   cargo build
//   cargo run
//   .\target\debug\rust_demo.exe
//   .\target\debug\rust_demo.exe --port=9091

extern crate rustc_serialize;
extern crate docopt;

use docopt::Docopt;

const USAGE: &'static str = "
Naval Fate.
Usage:
  rust_demo.exe [--port=<kn>]
Options:
  --port=<kn> set port [default: 9090].
";

#[derive(Debug, RustcDecodable)]
struct Args {
    flag_port: isize,
}

fn main() {
    let args: Args = Docopt::new(USAGE)
                            .and_then(|d| d.decode())
                            .unwrap_or_else(|e| e.exit());
    let mut port = args.flag_port;
	if port <= 0 {
		port = 9090;
	}
    println!("port={}", port);
}