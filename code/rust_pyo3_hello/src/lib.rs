use pyo3::prelude::*;

/// Formats the sum of two numbers as string.
#[pyfunction]
fn hello(s: &str) -> PyResult<String> {
    let msg = format!("Hey there {s}!");
    Ok(msg)
}

/// A Python module implemented in Rust.
#[pymodule]
fn pyconit(_py: Python, m: &PyModule) -> PyResult<()> {
    m.add_function(wrap_pyfunction!(hello, m)?)?;
    Ok(())
}
