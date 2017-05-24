// run it with
//   cargo build
//   cargo run

fn binary_search(data: &Vec<i32>, val: i32, low: usize, high: usize) -> i32 {
	let mid = (low + high) / 2;
	let mid_val:i32 = data[mid];
	if mid_val == val {
		return mid as i32;
	}
	if mid == low || mid == high {
		return -1;
	}

	if mid_val > val {
		binary_search(data, val, low, mid)
	} else {
		binary_search(data, val, mid, high)
	}
}

fn main() {
	let data: Vec<i32> = vec![1, 3, 7, 8, 9, 19, 21, 49, 56];
	let len = data.len();

	let mut val = 8;
	let mut i = binary_search(&data, val, 0, len - 1);
    println!("val={}, i={}", val, i);

	val = 18;
	i = binary_search(&data, val, 0, len - 1);
    println!("val={}, i={}", val, i);
}
