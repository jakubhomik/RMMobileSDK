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
                    url: "https://github.com/jakubhomik/RMMobileSDK/blob/SwiftPackageManager-implementation/Sources/RMMobileSDK.xcframework.zip",
                    checksum: "349e6247ea805c8cc1d1b04753445ae184ec22b5a749828264156c576e4cc248"
                ),
        .testTarget(
            name: "RMMobileSDKTests",
            dependencies: ["RMMobileSDK"]
        ),
    ]
)
