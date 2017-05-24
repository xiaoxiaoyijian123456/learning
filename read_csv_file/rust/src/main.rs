// run it with
//   cargo build
//   cargo run
extern crate csv;

fn main() {
	let mut rdr = csv::Reader::from_file("../test.csv").unwrap().has_headers(false);
	for record in rdr.decode() {
		let (s1, s2): (String, String) = record.unwrap();
		println!("{},{}", s1, s2);
	}

    println!("end.");
}
