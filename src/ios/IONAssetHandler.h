#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
/** PDBIM **/
#import <Cordova/CDVURLSchemeHandler.h>
/** /PDBIM **/

@interface IONAssetHandler : NSObject <WKURLSchemeHandler>

@property (nonatomic, strong) NSString * basePath;
@property (nonatomic, strong) NSString * scheme;

/** PDBIM **/
@property (nonatomic, strong) CDVURLSchemeHandler * schemeHandler;
@property (nonatomic, strong) CDVViewController * viewController;
/** /PDBIM **/

-(void)setAssetPath:(NSString *)assetPath;
/** PDBIM **/
//- (instancetype)initWithBasePath:(NSString *)basePath andScheme:(NSString *)scheme;
- (instancetype)initWithBasePath:(NSString *)basePath andScheme:(NSString *)scheme andViewController:(CDVViewController *)viewController;
/** /PDBIM **/

@end
