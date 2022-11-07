//
//  GDMObject.m
//  Bolts
//
//  Created by XueFeng Chen on 2022/10/22.
//

#import "GDMObject.h"

#import "GDMService.h"

@implementation GDMObject

- (instancetype)init {
    return [self initWithMetaData:@{}];
}

- (instancetype)initWithMetaData:(id)metaData {
    NSError *error = nil;
    return [self initWithMetaData:metaData error:&error];
}

@end
