fn main() {
	let mut x = 1;
	let mut done = false;
	let mut var1 = 0;

	while !done {
		println!("{}", x);
		x *= 2;
		if x == 16 {
			done = true;
		}
	}

	for y in 1..10 {
		println!("{}", y);
	}

	loop {
		var1 += 1;
		println!("{}", var1);
		if var1 == 10 {break;}
	}
}
