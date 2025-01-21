//
//  HFExtensions.swift
//  HFLogBeaver
//
//  Created by liuhongfei on 2024/10/12.
//

import Foundation

extension String {
    /// cross-Swift compatible characters count
    var length: Int {
        return self.count
    }

    /// cross-Swift-compatible first character
    var firstChar: Character? {
        return self.first
    }

    /// cross-Swift-compatible last character
    var lastChar: Character? {
        return self.last
    }

    /// cross-Swift-compatible index
    func find(_ char: Character) -> Index? {
        #if swift(>=5)
            return self.firstIndex(of: char)
        #else
            return self.index(of: char)
        #endif
    }
}
