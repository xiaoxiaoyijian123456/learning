// run it with:
//    node main.js

var binary_search = (data, val, low, high) => {
	let mid = (low + high) / 2;
	let midVal = data[mid];
	if (midVal == val) {
		return mid;
	}
	if (mid == low || mid == high) {
		return -1;
	}

	if (midVal > val) {
		return binary_search(data, val, low, mid);
	} else {
		return binary_search(data, val, mid, high);
	}
}

let data = [1, 3, 7, 8, 9, 19, 21, 49, 56]
let val = 8;
let i = binary_search(data, val, 0, data.length - 1);
console.log("val=" + val + ", i=" + i);

val = 18;
i = binary_search(data, val, 0, data.length - 1);
console.log("val=" + val + ", i=" + i);