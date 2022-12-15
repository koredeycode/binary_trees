for f in *; do
  if [ -f "$f" ] && [ -x "$f" ]; then
    mv "$f" executables/
  fi
done
