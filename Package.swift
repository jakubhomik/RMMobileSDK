// swift-tools-version: 6.0

import PackageDescription

let package = Package(
    name: "RMMobileSDK",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "RMMobileSDK",
            targets: ["RMMobileSDK"]),
    ],
    targets: [
        .binaryTarget(
                    name: "RMMobileSDK",
                    url: "https://github.com/jakubhomik/RMMobileSDK/tree/SwiftPackageManager-implementation/Sources/RMMobileSDK/RMMobileSDK.zip",
                    checksum: "a71e63351162971363d089401d29de54af8dc9e3a0170d19efb3f7df3994258d"
                ),
        .testTarget(
            name: "RMMobileSDKTests",
            dependencies: ["RMMobileSDK"]
        ),
    ]
)
