//
//  GDMParseConfiguration.h
//  Bolts
//
//  Created by XueFeng Chen on 2022/11/1.
//

#import "GDMConfiguration.h"

NS_ASSUME_NONNULL_BEGIN

@interface GDMParseConfiguration : GDMConfiguration

@property (nonatomic, copy) NSString *applicationId;
@property (nonatomic, copy) NSString *clientKey;
@property (nonatomic, copy) NSString *server;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithApplicationId:(NSString *)applicationId clientKey:(NSString *)clientKey server:(NSString *)server;

@end

NS_ASSUME_NONNULL_END
