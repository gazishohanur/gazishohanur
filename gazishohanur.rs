use rand::Rng;

fn main() {
    let num = rand::thread_rng().gen_range(1..=3);
    println!("Random number: {}", num);
}