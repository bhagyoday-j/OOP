
  try {
    cin >> tv;
    cout << "All values are correct!\n";
  } catch (int) {
    cerr << "Invalid input detected. Resetting values to zero.\n";
    tv.clear();
  }

  cout << tv;