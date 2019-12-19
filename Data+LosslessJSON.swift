//
//  Data+LosslessJSON.swift
//  VDS
//
//  Created by Mike on 2019/12/19.
//  Copyright © 2019 博洛科技. All rights reserved.
//

import Foundation

extension Data {
    
    var jsonObject: Any? {
        var obj: Any?
        SBJson5Parser.init(block: { (item, stop) in
            obj = item
        }, errorHandler: nil).parse(self)
        return obj
    }
    
}
