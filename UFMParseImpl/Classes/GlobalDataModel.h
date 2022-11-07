//
//  GlobalDataModel.h
//  Bolts
//
//  Created by XueFeng Chen on 2022/11/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class GDMConfiguration;

@interface GlobalDataModel : NSObject

+ (void)initializeWithConfiguration:(GDMConfiguration *)configuration;

+ (NSString *)getImplString;

@end

NS_ASSUME_NONNULL_END
