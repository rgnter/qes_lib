# WIP draft for SOČ
This library built for signing, sealing and verifying various documents with QES(eIDAS compliant) technology.

## Bindings
- [x] C
- [ ] C# 
- [ ] Python
- [x] Java
- [x] Go
- [ ] Rust

## QES AdES roadmap
Supported **Ad**vanced **E**lectronic **S**ignatures
- [CAdES](https://www.etsi.org/deliver/etsi_ts/103100_103199/103173/02.02.01_60/ts_103173v020201p.pdf) (*SP*)
    - [x]  Basic level (B)
    - [ ]  Trusted time level (T)
    - [ ]  Long Term level (LT)
    - [ ]  Long Term with Archive time-stamps (LTA)
- [PAdES](https://www.etsi.org/deliver/etsi_ts/103100_103199/103172/02.02.02_60/ts_103172v020202p.pdf) (*SP*)
    - [x]  Basic level (B)
    - [ ]  Trusted time level (T)
    - [ ]  Long Term level (LT)
    - [ ]  Long Term with Archive time-stamps (LTA)
- [XAdES](https://www.etsi.org/deliver/etsi_ts/103100_103199/103171/02.01.01_60/ts_103171v020101p.pdf) (*SP*)
    - [x]  Basic level (B)
    - [x]  Trusted time level (T)
    - [x]  Long Term level (LT)
    - [x]  Long Term with Archive time-stamps (LTA)
- [ZAP over XAdES](https://www.ditec.sk/ep/signature_formats/xades_zep/index.html) (*SP*)

## QES ASiC roadmap
Supported **A**ssociated **Si**gnature **C**ontainers
- [ ]  ASiC Simple 
  - [ ]  time assertion additional container
- [ ]  ASiC Extended  
  - [ ]  CAdES additional container
  - [ ]  time assertion additional container

## Licensing
something free and permisible...
