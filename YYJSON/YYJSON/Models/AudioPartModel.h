//
//  AudioPartModel.h
//  YYJSON
//
//  Created by Ivan on 13-10-25.
//  Copyright (c) 2013年 Ivan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YYJSONHelper.h"

@protocol AudioPartModel <NSObject>
@end

@interface AudioPartModel : NSObject <YYJSONHelperProtocol>
@property(copy, nonatomic) NSString *partID;
@property(assign, nonatomic) float begin;
@property(assign, nonatomic) float end;
@end

