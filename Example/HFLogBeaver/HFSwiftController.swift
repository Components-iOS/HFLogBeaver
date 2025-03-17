//
//  HFSwiftController.swift
//  HFLogger_Example
//
//  Created by bizconf on 2025/3/17.
//  Copyright © 2025 liuhongfei. All rights reserved.
//

import UIKit
import HFLogBeaver

@objc public class HFSwiftController: UIViewController {
    
    // MARK: - Life Cycle
    public override func viewDidLoad() {
        super.viewDidLoad()
        
        let logger = SwiftLogger.shared
        logger.enableFileLog = true
        logger.setupLogBeaver()
        
        logError(logger.getLogFilePath()!)
        logError(logger.getLogPrefixName()!)
        
        log(str: "111", str1: "222", str2: "333")
    }
    
    func log(str: String, str1: String, str2: String) {
        logError("\(str) \(str1) \(str2)")
    }

}
