auto CPU::serialize(serializer& s) -> void {
  V30MZ::serialize(s);
  Thread::serialize(s);
  s(dma.source);
  s(dma.target);
  s(dma.length);
  s(dma.enable);
  s(dma.direction);
  s(keypad.matrix);
  s(keypad.lastPolledMatrix);
  s(io.cartridgeEnable);
  s(io.cartridgeRomWidth);
  s(io.cartridgeRomWait);
  s(io.interruptBase);
  s(io.interruptEnable);
  s(io.interruptStatus);
  s(io.nmiOnLowBattery);
}
