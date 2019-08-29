Tdcoin Core
=============

Setup
---------------------
Tdcoin Core is the original Tdcoin client and it builds the backbone of the network. It downloads and, by default, stores the entire history of Tdcoin transactions, which requires a few hundred gigabytes of disk space. Depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

To download Tdcoin Core, visit [tdcoincore.org](https://tdcoincore.org/en/download/).

Running
---------------------
The following are some helpful notes on how to run Tdcoin Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/tdcoin-qt` (GUI) or
- `bin/tdcoind` (headless)

### Windows

Unpack the files into a directory, and then run tdcoin-qt.exe.

### macOS

Drag Tdcoin Core to your applications folder, and then run Tdcoin Core.

### Need Help?

* See the documentation at the [Tdcoin Wiki](https://en.tdcoin.it/wiki/Main_Page)
for help and more information.
* Ask for help on [#tdcoin](http://webchat.freenode.net?channels=tdcoin) on Freenode. If you don't have an IRC client, use [webchat here](http://webchat.freenode.net?channels=tdcoin).
* Ask for help on the [TdcoinTalk](https://tdcointalk.org/) forums, in the [Technical Support board](https://tdcointalk.org/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build Tdcoin Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [FreeBSD Build Notes](build-freebsd.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [NetBSD Build Notes](build-netbsd.md)
- [Gitian Building Guide (External Link)](https://github.com/tdcoin-core/docs/blob/master/gitian-building.md)

Development
---------------------
The Tdcoin repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Productivity Notes](productivity.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://dev.visucore.com/tdcoin/doxygen/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [Travis CI](travis-ci.md)
- [JSON-RPC Interface](JSON-RPC-interface.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [TdcoinTalk](https://tdcointalk.org/) forums, in the [Development & Technical Discussion board](https://tdcointalk.org/index.php?board=6.0).
* Discuss project-specific development on #tdcoin-core-dev on Freenode. If you don't have an IRC client, use [webchat here](http://webchat.freenode.net/?channels=tdcoin-core-dev).
* Discuss general Tdcoin development on #tdcoin-dev on Freenode. If you don't have an IRC client, use [webchat here](http://webchat.freenode.net/?channels=tdcoin-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [tdcoin.conf Configuration File](tdcoin-conf.md)
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [ZMQ](zmq.md)
- [PSBT support](psbt.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
