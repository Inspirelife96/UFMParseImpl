//
//  GlobalDataModel.m
//  Bolts
//
//  Created by XueFeng Chen on 2022/11/1.
//

#import "GlobalDataModel.h"

#import "GDMConfiguration.h"
#import "GDMParseConfiguration.h"

static GDMConfiguration *currentConfiguration_;

@implementation GlobalDataModel

+ (void)initializeWithConfiguration:(GDMConfiguration *)configuration {
    currentConfiguration_ = configuration;
    
    if ([configuration isKindOfClass:[GDMParseConfiguration class]]) {
        GDMParseConfiguration *parseConfiguration = (GDMParseConfiguration *)configuration;
        [Parse initializeWithConfiguration:[ParseClientConfiguration configurationWithBlock:^(id<ParseMutableClientConfiguration> configuration) {
//            configuration.applicationId = parseConfiguration.appli;
//            configuration.clientKey = parseConfiguration.clientKey;
//            configuration.server = @"https://inspirelife2017.com/learnpaint2";
//            configuration.networkRetryAttempts = 0;
        }]];
    }
}

+ (NSString *)getImplString {
    return currentConfiguration_.implString;
}

@end
