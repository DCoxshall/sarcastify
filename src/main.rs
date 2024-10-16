use std::env;

fn main() {
    let args: Vec<String> = env::args().collect();
    for field in &args[1..] {
        print!("{} ", sarcastify(field.clone()));
    }
}

fn sarcastify(field: String) -> String {
    let mut new_field = String::from("");

    for c in field.chars() {
        if c.is_alphabetic() {
            if rand::random() {
                new_field.push(c.to_ascii_lowercase());
            } else {
                new_field.push(c.to_ascii_uppercase());
            }
        } else {
            new_field.push(c);
        }
    }

    return new_field;
}
