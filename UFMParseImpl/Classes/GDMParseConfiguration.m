//
//  GDMParseConfiguration.m
//  Bolts
//
//  Created by XueFeng Chen on 2022/11/1.
//

#import "GDMParseConfiguration.h"

@implementation GDMParseConfiguration

- (instancetype)initWithApplicationId:(NSString *)applicationId clientKey:(NSString *)clientKey server:(NSString *)server {
    if (self = [super init]) {
        self.implString = @"ParseImpl";
        self.applicationId = applicationId;
        self.clientKey = clientKey;
        self.server = server;
    }
    
    return self;
}

@end
