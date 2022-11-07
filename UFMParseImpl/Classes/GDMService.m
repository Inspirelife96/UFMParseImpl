//
//  GDMService.m
//  GlobalDataModel
//
//  Created by XueFeng Chen on 2022/11/1.
//

#import "GDMService.h"

#import "GDMConfiguration.h"
#import "GDMParseConfiguration.h"

static GDMConfiguration *currentConfiguration_;

@implementation GDMService

+ (void)initializeWithConfiguration:(GDMConfiguration *)configuration {
    currentConfiguration_ = configuration;
    
    if ([configuration isKindOfClass:[GDMParseConfiguration class]]) {
        GDMParseConfiguration *parseConfiguration = (GDMParseConfiguration *)configuration;
        [Parse initializeWithConfiguration:[ParseClientConfiguration configurationWithBlock:^(id<ParseMutableClientConfiguration> configuration) {
            configuration.applicationId = parseConfiguration.applicationId;
            configuration.clientKey = parseConfiguration.clientKey;
            configuration.server = parseConfiguration.server;
            configuration.networkRetryAttempts = 0;
        }]];
    }
}

+ (NSString *)getImplString {
    return currentConfiguration_.implString;
}


@end
