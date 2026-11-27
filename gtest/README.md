# GTest workspace

Weekly DSA problems with Google Test cases, merged in from the old `week-test` repo.

## Run a problem (Linux / WSL)

```bash
sudo apt-get install -y libgtest-dev cmake g++
cd gtest
./run_app.sh WEEK1/best-time-to-buy-and-sell-stock.cpp
```

`include/allheaders.h` here is separate from the top-level `include/` used by the `build.bat` workflow.
CI (`.github/workflows/gtest.yml`) builds and runs the WEEK1 sample on every change under `gtest/`.
