//
//  GDMService.h
//  GlobalDataModel
//
//  Created by XueFeng Chen on 2022/11/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class GDMConfiguration;

@interface GDMService : NSObject

+ (void)initializeWithConfiguration:(GDMConfiguration *)configuration;

+ (NSString *)getImplString;

@end

NS_ASSUME_NONNULL_END
