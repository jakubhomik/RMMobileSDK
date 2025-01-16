// swift-tools-version: 6.0

import PackageDescription

let package = Package(
    name: "RMMobileSDK",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "RMMobileSDK",
            targets: ["RMMobileSDK"]),
    ],
    targets: [
        .target(
            name: "RMMobileSDK",
            path: "Sources/RMMobileSDK",
            publicHeadersPath: "Sources/RMMobileSDK/Public"),
        .testTarget(
            name: "RMMobileSDKTests",
            dependencies: ["RMMobileSDK"]
        ),
    ]
)
