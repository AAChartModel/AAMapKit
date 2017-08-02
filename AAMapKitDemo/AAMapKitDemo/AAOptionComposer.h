//
//  AAOptionComposer.h
//  AAMapKitDemo
//
//  Created by An An on 2017/8/2.
//  Copyright © 2017年 An An. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AAOption.h"
#import "AAMapModel.h"
@interface AAOptionComposer : NSObject
+(AAOption *)constructTheAAOptionInstanseObjectWithAAMapModel:(AAMapModel *)mapModel;
@end
